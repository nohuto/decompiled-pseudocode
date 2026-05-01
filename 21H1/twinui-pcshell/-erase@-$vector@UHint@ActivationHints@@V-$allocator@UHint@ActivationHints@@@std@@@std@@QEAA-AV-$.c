/*
 * XREFs of ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803A9DF0
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x180054F70 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803A94B0 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@Z @ 0x180054ED4 (--$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803A92A0 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<ActivationHints::Hint>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax

  std::_Move_unchecked<ActivationHints::Hint *,ActivationHints::Hint *>(a3 + 80, *(_QWORD *)(a1 + 8), a3);
  ActivationHints::Hint::~Hint((ActivationHints::Hint *)(*(_QWORD *)(a1 + 8) - 80LL));
  *(_QWORD *)(a1 + 8) -= 80LL;
  result = a2;
  *a2 = a3;
  return result;
}
