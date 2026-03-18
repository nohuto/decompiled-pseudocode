/*
 * XREFs of OffsetWindow @ 0x1C003F2F0
 * Callers:
 *     OffsetChildren @ 0x1C003F1FC (OffsetChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F9B44 (UpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 *     FindSpb @ 0x1C0219E64 (FindSpb.c)
 */

__int64 __fastcall OffsetWindow(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  _DWORD *Spb; // rax
  struct tagPOINT v14; // [rsp+70h] [rbp+8h] BYREF

  v5 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 100LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) += a3;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 136);
  if ( v8 > 1 && (*(_BYTE *)(v6 + 21) & 8) == 0 )
  {
    GreOffsetRgn(v8, a2, a3);
    v7 = *(_QWORD *)(a1 + 40);
  }
  v9 = *(_QWORD *)(v7 + 168);
  if ( v9 )
  {
    GreOffsetRgn(v9, a2, v5);
    v7 = *(_QWORD *)(a1 + 40);
  }
  if ( *(char *)(v7 + 16) < 0 )
  {
    Spb = (_DWORD *)FindSpb(a1);
    Spb[6] += a2;
    Spb[8] += a2;
    Spb[9] += v5;
    Spb[7] += v5;
  }
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    result = DwmChildRectChange(a1);
  v12 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
  {
    v14 = *(struct tagPOINT *)(v12 + 88);
    return UpdateSprite(
             *(HDEV *)(gpDispInfo + 40LL),
             (struct tagWND *)a1,
             v11,
             0LL,
             &v14,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0,
             0LL);
  }
  return result;
}
