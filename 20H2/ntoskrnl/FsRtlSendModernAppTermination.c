/*
 * XREFs of FsRtlSendModernAppTermination @ 0x1403BFC60
 * Callers:
 *     FsRtlpOplockSendModernAppTermination @ 0x140261CE8 (FsRtlpOplockSendModernAppTermination.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall FsRtlSendModernAppTermination(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h] BYREF

  if ( !a1 || !a2 )
  {
    v5[0] = -1;
    a1 = v5;
    v5[1] = 0;
    a2 = 4;
  }
  if ( a2 > 0x1000 )
    return 2147483653LL;
  if ( !a3 )
  {
    v3 = WNF_FLT_RUNDOWN_WAIT;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v3 = WNF_FSRL_OPLOCK_BREAK;
LABEL_7:
    v6 = v3;
    return ZwUpdateWnfStateData(&v6, a1, a2, 0LL, 0LL, 0, 0);
  }
  return 3221225485LL;
}
