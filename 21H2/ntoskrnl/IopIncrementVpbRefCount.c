/*
 * XREFs of IopIncrementVpbRefCount @ 0x140319DF8
 * Callers:
 *     IopMountInitializeVpb @ 0x14020DC90 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x140500F54 (IopReferenceVerifyVpb.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     IopInterlockedIncrementUlong @ 0x140319E3C (IopInterlockedIncrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_DWORD *)(BugCheckParameter2 + 28);
  if ( a2 )
    result = IopInterlockedIncrementUlong(9uLL);
  else
    result = (unsigned int)++*v2;
  if ( (int)result <= 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)0x150);
      v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, (unsigned int)*v2);
  }
  return result;
}
