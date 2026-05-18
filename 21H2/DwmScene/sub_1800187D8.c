/*
 * XREFs of sub_1800187D8 @ 0x1800187D8
 * Callers:
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_1800187D8(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::RenderDeviceGeneric>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    *a1 = a2;
    a1[1] = (__int64)v4;
    sub_1800111C8((__int64)a1, a2);
  }
  catch ( ... )
  {
    if ( a2 )
      sub_18001A380(a2, 1LL);
    throw;
  }
}
