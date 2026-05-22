/*
 * XREFs of ??$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA?AV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@0@XZ @ 0x1800C8C68
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x1800C9370 (SpatialInteractionDevices--GetReportCaps.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SpatialInteractionDevices::SpatialInputReportCaps,>(_QWORD *a1)
{
  _QWORD *result; // rax
  char *v3; // [rsp+30h] [rbp+8h]

  v3 = (char *)operator new(0xC0uLL);
  *((_DWORD *)v3 + 2) = 1;
  *((_DWORD *)v3 + 3) = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vftable';
  memset_0(v3 + 16, 0, 0xB0uLL);
  *((_QWORD *)v3 + 2) = 0LL;
  *(_OWORD *)(v3 + 24) = 0LL;
  *(_OWORD *)(v3 + 40) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_OWORD *)v3 + 4) = 0LL;
  *((_OWORD *)v3 + 5) = 0LL;
  *((_OWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 14) = 0LL;
  *(_OWORD *)(v3 + 120) = 0LL;
  *(_OWORD *)(v3 + 136) = 0LL;
  *((_DWORD *)v3 + 38) = 0;
  *(_QWORD *)(v3 + 156) = 0LL;
  *((_QWORD *)v3 + 21) = 0LL;
  *((_QWORD *)v3 + 22) = 0LL;
  *((_QWORD *)v3 + 23) = 0LL;
  result = a1;
  *a1 = v3 + 16;
  a1[1] = v3;
  return result;
}
