/*
 * XREFs of IopSymlinkRememberJunction @ 0x1406B9BC0
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406B9F74 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14024011C (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x14024013C (IopSymlinkGetECP.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406B9B78 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406B9DC4 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1406BA6C4 (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetRelatedFileName @ 0x1409342B0 (IopGetRelatedFileName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // edi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  _WORD *MostRecentlyUsedName; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  __int64 Pool2; // rax
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-50h]
  __int16 v18; // [rsp+50h] [rbp-20h] BYREF
  _WORD *v19; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  MostRecentlyUsedName = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain((__int64)RelatedMountPoint);
  }
  else
  {
    MostRecentlyUsedName = (_WORD *)IopSymlinkGetMostRecentlyUsedName(v10);
    v19 = MostRecentlyUsedName;
    MostRecentlyUsedName[1] |= 1u;
    *MostRecentlyUsedName = v13;
    if ( v12 == MostRecentlyUsedName )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v16 = (unsigned __int16)(v12[8] + 2);
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v18 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, &Destination, v16, &v18);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, a1, &Destination, v18, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v19);
          MostRecentlyUsedName = v19;
        }
      }
    }
  }
  Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 88) + 32LL, 1767075657LL);
  *((_QWORD *)MostRecentlyUsedName + 1) = Pool2;
  if ( Pool2 )
  {
    LOWORD(v17) = 0;
    IopSymlinkInitializeSymlinkInfo(
      Pool2,
      (unsigned int)*(unsigned __int16 *)(a2 + 88) + 32,
      *(_QWORD *)(a2 + 96),
      *(unsigned __int16 *)(a2 + 88),
      v17,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RelatedFileName;
}
