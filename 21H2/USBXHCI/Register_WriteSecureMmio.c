/*
 * XREFs of Register_WriteSecureMmio @ 0x1C003D41C
 * Callers:
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     Register_BiosHandoff @ 0x1C0013F1C (Register_BiosHandoff.c)
 *     XilRegister_WriteUlong64 @ 0x1C0014420 (XilRegister_WriteUlong64.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_WriteSecureMmio(__int64 a1, __int64 a2, int a3, const void *a4)
{
  __int64 v8; // r15
  size_t v9; // rbx
  __int64 result; // rax
  int v11; // edx
  int v12[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-88h] BYREF

  v12[0] = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 2LL;
        break;
      case 2:
        v9 = 4LL;
        break;
      case 3:
        v9 = 8LL;
        break;
      default:
        v9 = 0LL;
        break;
    }
  }
  else
  {
    v9 = 1LL;
  }
  memset(v13, 0, sizeof(v13));
  v13[3] = *(_QWORD *)(a1 + 120);
  LODWORD(v13[4]) = 11;
  v13[5] = a2;
  LODWORD(v13[6]) = a3;
  memmove(&v13[7], a4, v9);
  result = SecureChannel_SendRequestSynchronously(v8, v13, 64LL, v12, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v12[0];
    if ( v12[0] < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               v11,
               6,
               76,
               (__int64)&WPP_6d0f545b908f3ff5e03e6416fb6b60c9_Traceguids,
               v12[0]);
    }
  }
  return result;
}
