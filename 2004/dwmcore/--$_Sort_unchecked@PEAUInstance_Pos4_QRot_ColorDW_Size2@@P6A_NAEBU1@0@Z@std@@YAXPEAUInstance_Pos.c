/*
 * XREFs of ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801AB1AC
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801AB1AC (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801AB314 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@QEAU1@P6A_NAEBU1@2@Z@Z @ 0x1801AA8C8 (--$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUIns.c)
 *     ??$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801AA9F4 (--$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YA?AU?$pair@PEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@@0@PEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU2@1@Z@Z @ 0x1801AABA8 (--$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std.c)
 *     ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801AB128 (--$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801AB1AC (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 */

char *__fastcall std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int128 *, char *))
{
  char *v4; // rbx
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  char *result; // rax
  __int64 v10; // rdx
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char *v12; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  result = (char *)(v8 >> 63);
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      &v11,
      (unsigned __int64)v7,
      v4,
      (unsigned __int8 (__fastcall *)(_OWORD *, _OWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (v11 - v7) / 48 >= (v4 - v12) / 48 )
    {
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v12,
        v4,
        a3,
        a4);
      v4 = v11;
    }
    else
    {
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v7,
        v11,
        a3,
        a4);
      v7 = v12;
    }
    result = (char *)((unsigned __int64)((unsigned __int128)((v4 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
    v10 = (v4 - v7) / 48;
  }
  while ( v10 > 32 );
  if ( v10 <= 32 )
  {
LABEL_9:
    if ( v10 >= 2 )
      return std::_Insertion_sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
               v7,
               v4,
               a4);
  }
  else
  {
    std::_Make_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      (__int64)v7,
      (__int64)v4,
      (__int64)a4);
    return (char *)std::_Sort_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
                     v7,
                     (__int64)v4,
                     (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
  }
  return result;
}
