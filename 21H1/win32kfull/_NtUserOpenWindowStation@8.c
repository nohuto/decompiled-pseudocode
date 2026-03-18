/*
 * XREFs of _NtUserOpenWindowStation@8 @ 0x7DBDA
 * Callers:
 *     <none>
 * Callees:
 *     __OpenWindowStation@12 @ 0x7E7F2 (__OpenWindowStation@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?RtlStringCbPrintfW@@YAJPAGIPBGZZ @ 0x15F684 (-RtlStringCbPrintfW@@YAJPAGIPBGZZ.c)
 */

int __stdcall NtUserOpenWindowStation(unsigned int a1, int a2)
{
  int v2; // ebx
  const void *v3; // esi
  char *v4; // ecx
  char v5; // al
  int v6; // ecx
  struct _UNICODE_STRING *v7; // edi
  int v8; // ecx
  volatile void *v9; // esi
  int v11; // eax
  int ProcessLuid; // ecx
  int v13; // [esp-4h] [ebp-78h]
  _BYTE v14[24]; // [esp+10h] [ebp-64h] BYREF
  _DWORD v15[6]; // [esp+28h] [ebp-4Ch] BYREF
  int v16; // [esp+40h] [ebp-34h]
  volatile void *v17; // [esp+44h] [ebp-30h]
  int v18; // [esp+48h] [ebp-2Ch] BYREF
  int v19; // [esp+4Ch] [ebp-28h]
  bool v20; // [esp+5Bh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  v2 = 0;
  v18 = 0;
  v19 = 0;
  memset(v14, 0, sizeof(v14));
  v16 = 0;
  v17 = 0;
  v20 = 1;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v3 = (const void *)a1;
  if ( a1 + 24 < a1 || a1 + 24 > _MmUserProbeAddress )
    v3 = (const void *)_MmUserProbeAddress;
  qmemcpy(v15, v3, sizeof(v15));
  qmemcpy(v14, v15, sizeof(v14));
  v4 = (char *)v15[2];
  if ( v15[2] >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  v5 = *v4;
  v6 = v15[2];
  *(_BYTE *)v15[2] = v5;
  *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
  v7 = (struct _UNICODE_STRING *)v15[2];
  v8 = *(_DWORD *)v15[2];
  v16 = *(_DWORD *)v15[2];
  v9 = *(volatile void **)(v15[2] + 4);
  v17 = v9;
  if ( v15[1] )
  {
    if ( v9 )
    {
      if ( v8 == 3801144 )
      {
        ProbeForWrite(v9, 0x3Au, 1u);
        v11 = __wcsicmp((const wchar_t *)v9, L"Service-0x00000000-00000000$");
        v8 = v13;
        if ( !v11 )
        {
          ProcessLuid = GetProcessLuid(0, &v18);
          v20 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)v9, HIWORD(v16), L"Service-0x%x-%x$", v19, v18);
            RtlInitUnicodeString(v7, (PCWSTR)v9);
          }
        }
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( v20 )
    v2 = _OpenWindowStation(v8);
  UserSessionSwitchLeaveCrit();
  return v2;
}
