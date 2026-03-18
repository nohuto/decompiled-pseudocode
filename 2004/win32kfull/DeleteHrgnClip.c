/*
 * XREFs of DeleteHrgnClip @ 0x1C00E8490
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00E8A90 (RevalidateDCE.c)
 */

__int64 __fastcall DeleteHrgnClip(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_DWORD *)(a1 + 64) &= 0xFFFFFF3F;
  v2 = *(_DWORD *)(a1 + 64);
  if ( (v2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 64) = v2 & 0xFFFBFFFF;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 > 2 )
    {
      GreMarkDeletableRgn();
      v3 = *(_QWORD *)(a1 + 40);
    }
    DeleteMaybeSpecialRgn(v3);
  }
  result = DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !v5 )
      return result;
    result = GreSelectVisRgn(*(_QWORD *)(a1 + 8), v5, 1LL);
    goto LABEL_8;
  }
  result = RevalidateDCE(a1);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    result = GreDeleteObject(v6);
LABEL_8:
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
