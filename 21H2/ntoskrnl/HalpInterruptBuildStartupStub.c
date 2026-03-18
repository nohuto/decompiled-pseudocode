/*
 * XREFs of HalpInterruptBuildStartupStub @ 0x1403B8EAC
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403B8E60 (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HalpInterruptCreateGdtEntry32 @ 0x1403B90AC (HalpInterruptCreateGdtEntry32.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

PVOID HalpInterruptBuildStartupStub()
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _OWORD *v1; // rdi
  PHYSICAL_ADDRESS v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r8d
  int v6; // r11d
  int v7; // r8d
  unsigned __int64 v8; // rax
  PVOID result; // rax

  PhysicalAddress = MmGetPhysicalAddress(HalpInterruptGlobalStartupBlock);
  v1 = HalpInterruptGlobalStartupBlock;
  v2 = PhysicalAddress;
  memmove(HalpInterruptGlobalStartupBlock, HalpRMStub, 0x679uLL);
  v1 = (_OWORD *)((char *)v1 + 1657);
  v3 = (int)v1;
  *v1 = HalpPMStub;
  v1[1] = xmmword_140025000;
  v1[2] = xmmword_140025010;
  v1[3] = xmmword_140025020;
  v1[4] = xmmword_140025030;
  *((_QWORD *)v1 + 10) = 0x90878B300FLL;
  *((_DWORD *)v1 + 22) = -4185585;
  *((_WORD *)v1 + 46) = 26223;
  v1 = (_OWORD *)((char *)v1 + 94);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 50) = 48;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 24) = v2.LowPart + v3 - (_DWORD)HalpInterruptGlobalStartupBlock;
  memmove(v1, HalpLMIdentityStub, HalpLMIdentityStubEnd - (_BYTE *)HalpLMIdentityStub);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 53) = 16;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 102) = v2.LowPart
                                                             + (_DWORD)v1
                                                             - (_DWORD)HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 15) = HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 14) = HalpLMStub;
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 48, v4, -1, 27, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 32, v5, v6, 19, 0);
  HalpInterruptCreateGdtEntry32((_DWORD)HalpInterruptGlobalStartupBlock + 24, 16, v7, 0, 27, 1);
  *((_WORD *)HalpInterruptGlobalStartupBlock + 6) = 63;
  *(_DWORD *)((char *)HalpInterruptGlobalStartupBlock + 14) = v2.LowPart + 24;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 16) = __readmsr(0x277u);
  v8 = __readmsr(0xC0000080);
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) = ((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8;
  result = HalpInterruptGlobalStartupBlock;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) &= ~0x400uLL;
  HalpInterruptGlobalStartupCodePhysical = v2.QuadPart;
  return result;
}
