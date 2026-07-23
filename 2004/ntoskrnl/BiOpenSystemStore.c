/*
 * XREFs of BiOpenSystemStore @ 0x14077143C
 * Callers:
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 *     SepSecureBootCorrectBcd @ 0x140920BF8 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039870C (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x140398740 (BiWasFirmwareModified.c)
 *     _wcsnicmp @ 0x1403CEC10 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D0F00 (wcstoul.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     BiLoadSystemStore @ 0x14076F7F4 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 *     BiIsSystemStore @ 0x140770FC8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x140771148 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 *     BiGetFirmwareType @ 0x1407725FC (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x1407735A0 (BiOpenKeyNonBcd.c)
 *     BiBindEfiNamespaceObjects @ 0x14096D3A0 (BiBindEfiNamespaceObjects.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenSystemStore(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r12d
  char v4; // r8
  int v5; // ebx
  int v6; // eax
  const wchar_t **v7; // r14
  __int64 v8; // rsi
  bool v9; // zf
  int v10; // eax
  bool v11; // si
  int v12; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-20h] BYREF
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG v21; // [rsp+90h] [rbp+48h] BYREF
  int v22; // [rsp+98h] [rbp+50h]

  *a1 = 0LL;
  v2 = 0LL;
  v21 = 0;
  Handle = 0LL;
  v3 = a2;
  P[0] = 0LL;
  v22 = 0;
  v16 = 0LL;
  BiLogMessage(2LL, L"Opening system store. Flags: 0x%x", a2);
  BiCleanupLoadedStores(16 * (v4 & 1));
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v5 < 0 )
    goto LABEL_21;
  v6 = BiEnumerateSubKeys(Handle, P, &v21);
  v7 = (const wchar_t **)P[0];
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_19;
  v8 = 0LL;
  v5 = -1073741275;
  v9 = v21 == 0;
  if ( !v21 )
    goto LABEL_7;
  while ( 1 )
  {
    if ( wcsnicmp(v7[v8], L"BCD", 3uLL) )
      goto LABEL_5;
    if ( wcstoul(v7[v8] + 3, 0LL, 10) == -1 )
      goto LABEL_5;
    BiLogMessage(2LL, L"Found loaded store at key %s", v7[v8]);
    v14 = BiOpenKey(Handle, v7[v8], 131097LL, &v16);
    v2 = v16;
    v5 = v14;
    if ( v14 < 0 )
      goto LABEL_5;
    if ( BiIsSystemStore(v16) )
      break;
    BiCloseKey(v2);
LABEL_5:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v21 )
      goto LABEL_6;
  }
  BiLogMessage(2LL, L"Store %s is the system store", v7[v8]);
  v5 = 0;
LABEL_6:
  v3 = a2;
  v9 = (_DWORD)v8 == v21;
LABEL_7:
  if ( !v9 )
  {
LABEL_11:
    if ( (v3 & 2) != 0 )
    {
      v2 |= 2uLL;
LABEL_17:
      *a1 = v2;
      goto LABEL_18;
    }
    BiLogMessage(2LL, L"Synchronizing store with firmware");
    v11 = BiWasFirmwareModified(v2);
    v12 = BiGetFirmwareType() - 1;
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v5 = 0;
LABEL_15:
          if ( !v11 )
            BiSetFirmwareModified(v2, 0);
          goto LABEL_17;
        }
        v5 = -1073741637;
      }
      else
      {
        v5 = BiBindEfiNamespaceObjects((HANDLE)v2);
      }
    }
    else
    {
      v5 = 0;
    }
    if ( v5 < 0 )
    {
      BiLogMessage(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", v3, (unsigned int)v5);
LABEL_18:
      if ( v5 < 0 )
        goto LABEL_37;
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  BiLogMessage(2LL, L"The system store is not already loaded");
  v16 = 0LL;
  if ( (v3 & 4) != 0 )
  {
    BiLogMessage(4LL, L"Specified flags prevent opening unloaded system store");
    v5 = -1073741275;
  }
  else
  {
    v10 = BiLoadSystemStore(&v16);
    v2 = v16;
    v5 = v10;
    if ( v10 >= 0 )
    {
      v22 = 1;
      goto LABEL_11;
    }
LABEL_37:
    if ( v2 )
      BiCloseStore(v2, 2 * v22);
  }
LABEL_19:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
