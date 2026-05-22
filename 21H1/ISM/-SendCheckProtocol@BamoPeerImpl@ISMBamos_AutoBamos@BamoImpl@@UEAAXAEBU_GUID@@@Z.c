/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x180006730
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // r10
  int v5; // eax
  __int16 v6; // [rsp+20h] [rbp-48h]
  int v7; // [rsp+20h] [rbp-48h]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (__int128)*a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v8[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 64);
  v8[1] = *((unsigned int *)this + 10);
  v6 = 0;
  v9 = v2;
  v5 = CoreUICallSend(v4, v8, 2LL, 74LL, v6, &unk_1801C01AD, (unsigned int)&v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDDD7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v5,
      v7);
    __debugbreak();
  }
}
