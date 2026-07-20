/*
 * XREFs of SmpGetMuSessionIdFromClientContext @ 0x140003B94
 * Callers:
 *     SmpExecPgm @ 0x1400023C0 (SmpExecPgm.c)
 *     SmpLoadDeferredSubsystem @ 0x140014710 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpGetProcessMuSessionId @ 0x140003678 (SmpGetProcessMuSessionId.c)
 */

__int64 __fastcall SmpGetMuSessionIdFromClientContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)a1 & 0x10) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 64);
    v3 = *(_QWORD *)(v3 + 32);
  }
  else if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    v3 = *(_QWORD *)(v3 + 48);
  }
  else
  {
    v4 = 0;
    if ( v3 )
    {
      if ( SmpGetProcessMuSessionId(*(void **)(a1 + 32), &v6) >= 0 )
        v4 = v6;
      else
        v3 = 0LL;
    }
  }
  *a2 = v3;
  return v4;
}
