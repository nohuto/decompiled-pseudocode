/*
 * XREFs of _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2
 * Callers:
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837 (_LdrpHandleUnprotectedDelayLoad@24.c)
 * Callees:
 *     _RtlNtStatusToDosErrorNoTeb@4 @ 0x4B2E5FE0 (_RtlNtStatusToDosErrorNoTeb@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpGetDelayloadAPIInfo@20 @ 0x4B32F789 (_LdrpGetDelayloadAPIInfo@20.c)
 */

int __fastcall LdrpRedirectDelayloadFailure(
        int a1,
        int a2,
        int a3,
        int (__thiscall *a4)(_DWORD, int, _DWORD *),
        int (__thiscall *a5)(_DWORD, int, int),
        int a6,
        NTSTATUS Status)
{
  int v7; // eax
  int v9; // ebx
  char v10; // al
  int v11; // esi
  const char *v12; // ecx
  int v13; // ecx
  char v14; // al
  _DWORD v16[4]; // [esp+10h] [ebp-34h] BYREF
  int v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h]
  int v19; // [esp+28h] [ebp-1Ch]
  int v20; // [esp+2Ch] [ebp-18h]
  ULONG v21; // [esp+30h] [ebp-14h]
  int v22; // [esp+34h] [ebp-10h]
  const char *v23; // [esp+38h] [ebp-Ch] BYREF
  int v24; // [esp+3Ch] [ebp-8h]
  int v25; // [esp+40h] [ebp-4h] BYREF

  v7 = *(_DWORD *)(a1 + 24);
  v22 = a1;
  v9 = 0;
  v24 = *(_DWORD *)(a3 + 4) + v7;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (int *)&v23, &v25);
  v10 = ShowSnaps;
  v11 = (int)v23;
  if ( (ShowSnaps & 3) != 0 )
  {
    v12 = v23;
    if ( !v23 )
      v12 = "Unknown";
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrdload.c",
      460,
      (int)"LdrpRedirectDelayloadFailure",
      0,
      "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
      v24,
      v12,
      v25,
      v22 + 44,
      Status);
    v10 = ShowSnaps;
  }
  if ( (v10 & 0x10) != 0 )
    __debugbreak();
  if ( !a2 )
  {
    v13 = 0;
LABEL_12:
    v14 = 1;
    goto LABEL_13;
  }
  v13 = *(_DWORD *)(a2 + 24);
  if ( (LdrpPolicyBits & 0x10) != 0 || (*(_BYTE *)(a2 + 52) & 1) != 0 )
    goto LABEL_12;
  v14 = 0;
LABEL_13:
  if ( !a4 || !v14 )
    goto LABEL_19;
  v16[1] = a3;
  v16[2] = a6;
  v20 = 0;
  v16[0] = 36;
  v16[3] = v24;
  v19 = v13;
  v21 = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v11 )
  {
    v17 = 1;
    v18 = v11;
  }
  else
  {
    v17 = 0;
    v18 = v25;
  }
  v9 = a4(a4, 4, v16);
  if ( !v9 )
  {
LABEL_19:
    if ( a5 )
    {
      if ( !v11 )
        v11 = v25;
      return a5(a5, v24, v11);
    }
  }
  return v9;
}
