/*
 * XREFs of ??$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801A94C0
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801A9C78 (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@_J1$$QEAU1@P6A_NAEBU1@3@Z@Z @ 0x1801A997C (--$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUI.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  _OWORD *v9; // rbx
  __int128 v10; // xmm1
  _OWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = a1;
  result = (unsigned __int64)v3 >> 63;
  v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 3);
  v8 = v7 >> 1;
  if ( v7 >> 1 > 0 )
  {
    v9 = (_OWORD *)(a1 + 48 * v8);
    do
    {
      v9 -= 3;
      v10 = v9[1];
      --v8;
      v11[0] = *v9;
      v11[2] = v9[2];
      v11[1] = v10;
      result = std::_Pop_heap_hole_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
                 v5,
                 v8,
                 v7,
                 (unsigned int)v11,
                 a3);
    }
    while ( v8 > 0 );
  }
  return result;
}
