/*
 * XREFs of HalpInterruptBuildStartupStub @ 0x1403A16D0
 * Callers:
 *     HalpSetupRealModeResume @ 0x1403FA300 (HalpSetupRealModeResume.c)
 *     HalpInterruptStartProcessor @ 0x14099AF74 (HalpInterruptStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HalpInterruptCreateGdtEntry32 @ 0x1403A1918 (HalpInterruptCreateGdtEntry32.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KeForceEnableNx @ 0x14099B140 (KeForceEnableNx.c)
 */

_QWORD *__fastcall HalpInterruptBuildStartupStub(PVOID *a1, PHYSICAL_ADDRESS *a2, const void *a3, __int64 a4)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char *v9; // rdi
  PHYSICAL_ADDRESS v10; // rbx
  char *v11; // rdi
  char v12; // al
  char v13; // r15
  int v14; // ecx
  int v15; // ecx
  void *v16; // rdi
  int v17; // r8d
  int v18; // r8d
  int v19; // r11d
  int v20; // r8d
  _QWORD *result; // rax
  __int64 v22; // rcx

  PhysicalAddress = MmGetPhysicalAddress(*a1);
  v9 = (char *)*a1;
  v10 = PhysicalAddress;
  memmove(*a1, HalpRMStub, 0x67CuLL);
  v11 = v9 + 1660;
  *(_OWORD *)v11 = HalpPMStub;
  *((_OWORD *)v11 + 1) = xmmword_14001FB40;
  *((_OWORD *)v11 + 2) = xmmword_14001FB50;
  *((_OWORD *)v11 + 3) = xmmword_14001FB60;
  *((_OWORD *)v11 + 4) = xmmword_14001FB70;
  *((_QWORD *)v11 + 10) = 0x90878B300FLL;
  *((_DWORD *)v11 + 22) = -4185585;
  *((_WORD *)v11 + 46) = 26223;
  v12 = KeForceEnableNx();
  v13 = HalpInterruptProcessorHidden;
  v14 = v12 != 0;
  if ( HalpInterruptProcessorHidden )
    v14 |= 4u;
  *((_DWORD *)*a1 + 2) = v14;
  *((_WORD *)*a1 + 50) = 48;
  v15 = (_DWORD)v11 - *(_DWORD *)a1;
  v16 = v11 + 94;
  *((_DWORD *)*a1 + 24) = v10.LowPart + v15;
  memmove(v16, HalpLMIdentityStub, HalpLMIdentityStubEnd - (_BYTE *)HalpLMIdentityStub);
  *((_WORD *)*a1 + 53) = 16;
  *(_DWORD *)((char *)*a1 + 102) = v10.LowPart + (_DWORD)v16 - *(_DWORD *)a1;
  *((_QWORD *)*a1 + 15) = *a1;
  *((_QWORD *)*a1 + 14) = HalpLMStub;
  HalpInterruptCreateGdtEntry32(*(_DWORD *)a1 + 24, 48, v17, -1, 27, 0);
  HalpInterruptCreateGdtEntry32(*(_DWORD *)a1 + 24, 32, v18, v19, 19, 0);
  HalpInterruptCreateGdtEntry32(*(_DWORD *)a1 + 24, 16, v20, 0, 27, 1);
  *((_WORD *)*a1 + 6) = 63;
  *(_DWORD *)((char *)*a1 + 14) = v10.LowPart + 24;
  *((_QWORD *)*a1 + 16) = __readmsr(0x277u);
  *((_QWORD *)*a1 + 17) = __readmsr(0xC0000080);
  *((_QWORD *)*a1 + 17) &= ~0x400uLL;
  memmove((char *)*a1 + 144, a3, 0x5C0uLL);
  *((_DWORD *)*a1 + 1) = 0;
  if ( v13 )
  {
    result = (_QWORD *)HalpBlkTiledMemoryMapPa;
    *((_QWORD *)*a1 + 11) = HalpBlkTiledMemoryMapPa;
  }
  else
  {
    result = *a1;
    v22 = (unsigned int)CurTiledCr3LowPart;
    if ( !HalpInterruptProcessorRestarting )
      v22 = *(unsigned int *)(a4 + 4);
    result[11] = v22;
  }
  if ( a2 )
    *a2 = v10;
  return result;
}
