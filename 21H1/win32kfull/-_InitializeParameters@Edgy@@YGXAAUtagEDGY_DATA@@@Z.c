/*
 * XREFs of ?_InitializeParameters@Edgy@@YGXAAUtagEDGY_DATA@@@Z @ 0x16EB9C
 * Callers:
 *     ?_InitializeData@Edgy@@YGPAUtagEDGY_DATA@@PAUtagDESKTOP@@@Z @ 0x16EB64 (-_InitializeData@Edgy@@YGPAUtagEDGY_DATA@@PAUtagDESKTOP@@@Z.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __thiscall Edgy::_InitializeParameters(int ecx0)
{
  __int64 v1; // [esp-10h] [ebp-1Ch]

  qmemcpy((void *)(ecx0 + 16), &unk_2585D8, 0x9Cu);
  *(_DWORD *)(ecx0 + 228) = 4000;
  *(_DWORD *)(ecx0 + 232) = 4000;
  *(_DWORD *)(ecx0 + 236) = 450;
  *(_DWORD *)(ecx0 + 216) = 350;
  HIDWORD(v1) = _gliQpcFreq[1];
  LODWORD(v1) = _gliQpcFreq[0];
  *(_QWORD *)(ecx0 + 240) = 450 * v1 / 1000;
}
