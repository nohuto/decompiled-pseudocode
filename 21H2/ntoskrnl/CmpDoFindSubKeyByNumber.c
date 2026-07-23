/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1406E2460
 * Callers:
 *     CmpCheckRegistry2 @ 0x1406DF7A0 (CmpCheckRegistry2.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14072A2EC (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14087AA78 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14087AB80 (CmpKeyEnumStackEntryNotifyPromotion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(__int64 a1, __int16 *a2, unsigned int a3)
{
  __int16 v4; // ax
  __int64 v8; // rdi
  _WORD *v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v12 = -1;
  v13 = 0;
  v4 = *a2;
  if ( *a2 != 26994 )
  {
LABEL_2:
    if ( ((v4 - 26220) & 0xFDFF) == 0 )
      return *(unsigned int *)&a2[4 * a3 + 2];
    return *(unsigned int *)&a2[2 * a3 + 2];
  }
  v8 = 0LL;
  if ( !a2[1] )
    return *(unsigned int *)&a2[2 * a3 + 2];
  while ( 1 )
  {
    v9 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(
                    a1,
                    *(unsigned int *)&a2[2 * v8 + 2],
                    &v12);
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v10 = (unsigned __int16)v9[1];
    if ( a3 < v10 )
      break;
    a3 -= v10;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= (unsigned __int16)a2[1] )
    {
      v4 = *a2;
      goto LABEL_2;
    }
  }
  if ( ((*v9 - 26220) & 0xFDFF) != 0 )
    v11 = *(_DWORD *)&v9[2 * a3 + 2];
  else
    v11 = *(_DWORD *)&v9[4 * a3 + 2];
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
  return v11;
}
