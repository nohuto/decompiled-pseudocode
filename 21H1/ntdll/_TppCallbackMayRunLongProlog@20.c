/*
 * XREFs of _TppCallbackMayRunLongProlog@20 @ 0x4B2B57AB
 * Callers:
 *     _TpCallbackIndependent@4 @ 0x4B2B5760 (_TpCallbackIndependent@4.c)
 *     _TpCallbackMayRunLong@4 @ 0x4B2E9600 (_TpCallbackMayRunLong@4.c)
 * Callees:
 *     _TppFastAlpcAdjustConcurrencyCount@4 @ 0x4B2B7189 (_TppFastAlpcAdjustConcurrencyCount@4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __fastcall TppCallbackMayRunLongProlog(_DWORD *a1, int a2, _DWORD *a3, signed __int32 *a4, signed __int32 *a5)
{
  int v5; // eax
  int v6; // eax
  volatile signed __int64 *v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // esi
  signed __int64 v11; // rax
  int v12; // ecx
  signed __int32 v14; // [esp+10h] [ebp-1Ch]
  signed __int32 v15; // [esp+14h] [ebp-18h]
  unsigned int v18; // [esp+20h] [ebp-Ch]
  int v19; // [esp+24h] [ebp-8h]
  unsigned int v20; // [esp+28h] [ebp-4h]

  if ( !a1 || a1[9] )
    TppRaiseInvalidParameter();
  v5 = a1[27];
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 92);
  else
    v6 = a1[18];
  v19 = v6;
  if ( !v6 )
    return -1073741811;
  if ( TppPoolpSerializedPool == v6 )
    return -1073741637;
  v15 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 248));
  v14 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 252));
  v7 = (volatile signed __int64 *)(v6 + 8);
  v8 = *(_DWORD *)(v6 + 8);
  v9 = *(_DWORD *)(v6 + 12);
  v20 = v9;
  do
  {
    v10 = v8;
    v18 = v9;
    v11 = _InterlockedCompareExchange64(
            v7,
            __SPAIR64__(v20, v8 ^ (unsigned __int16)(v8 ^ (v8 + 1))),
            __SPAIR64__(v9, v8));
    v8 = v11;
    v9 = HIDWORD(v11);
    v20 = HIDWORD(v11);
  }
  while ( __PAIR64__(v8, HIDWORD(v11)) != __PAIR64__(v10, v18) );
  a1[20] |= 0x10u;
  v12 = a1[19];
  a1[9] = a2;
  if ( v12 )
    TppFastAlpcAdjustConcurrencyCount();
  *a3 = v19;
  *a4 = v15;
  *a5 = v14;
  return 0;
}
