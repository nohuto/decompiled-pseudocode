/*
 * XREFs of MiInitializeKernelStacks @ 0x140B04910
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CF08 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x1403C289C (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MiInitializePteInfo @ 0x140B04AE0 (MiInitializePteInfo.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = qword_140C540D0;
  byte_140C5304C = (unsigned int)KeKernelStackSize >> 12;
  v5 = MiSystemVaToDynamicBitmap(14);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v4, 0x10000000000uLL) )
    return 0LL;
  if ( !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140C52F98, 14, 0, 11, v4, 0x10000000000LL, 1) )
    return 0LL;
  dword_140C52FB0 |= 1u;
  v6 = qword_140C54110;
  qword_140C52FE0 = qword_140C52F30;
  v7 = MiSystemVaToDynamicBitmap(16);
  if ( !(unsigned int)MiBuildDynamicRegion(v7, v6, 0x8000000000uLL)
    || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140C52FF0, 16, 0, 11, v6, 0x8000000000LL, 1) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_140C53008 |= 1u;
  qword_140C53038 = qword_140C52F38;
  return result;
}
