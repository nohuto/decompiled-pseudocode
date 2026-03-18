/*
 * XREFs of xxxSendMessageEx @ 0x1C00576F0
 * Callers:
 *     xxxSendMessageFF @ 0x1C01566F0 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 */

unsigned __int64 __fastcall xxxSendMessageEx(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        ULONG64 a5)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 LowLimit[3]; // [rsp+58h] [rbp-50h] BYREF
  int v11[4]; // [rsp+70h] [rbp-38h]
  unsigned __int64 v12; // [rsp+80h] [rbp-28h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
  LowLimit[0] = 0LL;
  *(_QWORD *)v11 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  v6 = (_BYTE *)a5;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[23] = v6[23];
  *(_OWORD *)v11 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 16);
  v7 = xxxSendTransformableMessageTimeout(a1, a2, a3, a4, v11[0], v11[1], (__int64 *)LowLimit, 0, 1);
  v8 = LowLimit[0];
  v12 = LowLimit[0];
  *(_QWORD *)&v11[2] = v7;
  *(_OWORD *)a5 = *(_OWORD *)v11;
  *(_QWORD *)(a5 + 16) = v12;
  return v8;
}
