/*
 * XREFs of ?CreateShellGesturesClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellGesturesClientProxy@@@Z @ 0x180101070
 * Callers:
 *     ?CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E4364 (-CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateShellGesturesClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoShellGesturesClientProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x70uLL);
  memset_0(v3, 0, 0x70uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoShellGesturesClientProxyImpl::`vftable';
  v3[5] = 0LL;
  *((_OWORD *)v3 + 3) = 0LL;
  *((_OWORD *)v3 + 4) = 0LL;
  *((_OWORD *)v3 + 5) = 0LL;
  *v3 = &ShellGesturesClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &ShellGesturesClientProxy::`vftable'{for `IShellGesturesClientProxy'};
  result = 0LL;
  *((_OWORD *)v3 + 6) = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  *a2 = (struct BamoShellGesturesClientProxy *)v3;
  return result;
}
