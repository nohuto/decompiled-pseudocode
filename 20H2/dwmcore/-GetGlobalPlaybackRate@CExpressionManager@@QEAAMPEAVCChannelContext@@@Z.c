/*
 * XREFs of ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18002761C
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CExpressionManager::GetGlobalPlaybackRate(CExpressionManager *this, struct CChannelContext *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  float *i; // rax
  __int64 v11; // rcx
  struct CChannelContext *v13; // [rsp+10h] [rbp+10h]

  v2 = 0LL;
  v13 = a2;
  if ( !a2 )
    return *(float *)&FLOAT_1_0;
  v4 = 0xCBF29CE484222325uLL;
  do
  {
    v5 = *((unsigned __int8 *)&v13 + v2++);
    v4 = 0x100000001B3LL * (v5 ^ v4);
  }
  while ( v2 < 8 );
  v6 = (__int64 *)*((_QWORD *)this + 55);
  v7 = v4 & *((_QWORD *)this + 60);
  v8 = *((_QWORD *)this + 57);
  v9 = 2 * v7;
  for ( i = *(float **)(v8 + 8 * v9); ; i = *(float **)i )
  {
    v11 = *(__int64 **)(v8 + 8 * v9) == v6 ? (__int64)v6 : **(_QWORD **)(v8 + 8 * v9 + 8);
    if ( i == (float *)v11 )
      break;
    if ( *((struct CChannelContext **)i + 2) == a2 )
      goto LABEL_9;
  }
  i = (float *)v6;
LABEL_9:
  if ( i == (float *)v6 )
    return *(float *)&FLOAT_1_0;
  else
    return i[6];
}
