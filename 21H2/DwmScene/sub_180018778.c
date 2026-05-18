/*
 * XREFs of sub_180018778 @ 0x180018778
 * Callers:
 *     sub_180016EC0 @ 0x180016EC0 (sub_180016EC0.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_180018778(_QWORD *a1, void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::D3D11::RenderDeviceD3D11>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    *a1 = a2;
    a1[1] = v4;
    sub_1800111C8((__int64)a1, (__int64)a2);
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
}
