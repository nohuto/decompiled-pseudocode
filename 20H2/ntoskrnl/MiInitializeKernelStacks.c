/*
 * XREFs of MiInitializeKernelStacks @ 0x140A4BE70
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140250EA8 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403B4904 (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x140A4D378 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = qword_140C4F9C8;
  byte_140C4EA3C = (unsigned int)KeKernelStackSize >> 12;
  v5 = MiSystemVaToDynamicBitmap(14);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v4, 0x10000000000uLL)
    || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140C4E9D8, 14, 0, 11, v4, 0x10000000000LL, 1) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_140C4E9F0 |= 1u;
  qword_140C4EA28 = qword_140C4E970;
  return result;
}
