/*
 * XREFs of sub_18012AF20 @ 0x18012AF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012AF20(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 242);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 258);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 274);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 290);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 306);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 322);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 338);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 354);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 370);
    *(_WORD *)(a2 + 144) = *(_WORD *)(a1 + 386);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v9) = -2147024809;
      v11 = (__int64)"SpatialAudioEncoderProperties::GetEncoderProperties";
      LODWORD(v10) = 464;
      sub_180109778((__int64)&dword_18019C480, byte_18016C12C, v6, v7, (const CHAR **)&v11, (__int64)&v10, (__int64)&v9);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
