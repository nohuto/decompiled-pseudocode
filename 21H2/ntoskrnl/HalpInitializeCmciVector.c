/*
 * XREFs of HalpInitializeCmciVector @ 0x1403A4108
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403A41CC (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInitializeCmciVector(__int64 a1, int a2)
{
  bool v4; // zf
  int v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+24h] [rbp-3Ch]
  int v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+2Ch] [rbp-34h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  int v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  int Priority; // [rsp+54h] [rbp-Ch]
  unsigned int v19; // [rsp+70h] [rbp+10h] BYREF
  int v20; // [rsp+74h] [rbp+14h]

  v7 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = 0;
  v4 = *(_DWORD *)(a1 + 216) == 2;
  v19 = *(_DWORD *)(a1 + 232);
  v20 = -7;
  if ( !v4 || !HalpInterruptFindLines(&v19) )
    return 0LL;
  v7 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = 0;
  v10 = -1;
  v17 = 53;
  v6 = 1;
  v8 = 1;
  v9 = 16;
  v11 = 1;
  v12 = 4;
  v14 = a2;
  Priority = HalpInterruptGetPriority(a1, 53LL);
  return HalpInterruptSetLineStateInternal(a1, (__int64)&v19, (__int64)&v6);
}
