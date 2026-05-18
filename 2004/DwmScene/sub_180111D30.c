/*
 * XREFs of sub_180111D30 @ 0x180111D30
 * Callers:
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180111D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  __int64 result; // rax

  v8 = operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    *((_QWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 3) = a3;
    *((_QWORD *)v8 + 4) = a4;
  }
  else
  {
    v9 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v9 + 4;
  result = a1;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
