/*
 * XREFs of NtManagePartition @ 0x1407DE5F0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     MmCheckPartitionManagementSupported @ 0x1407DE8B4 (MmCheckPartitionManagementSupported.c)
 *     PsReferencePartitionByHandle @ 0x1407DE8D0 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x1407DE98C (MmManagePartitionMemoryInformation.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x14085BA44 (MiQuerySpecialPurposeMemoryInformation.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140861BA4 (MmManagePartitionGetMemoryEvents.c)
 *     MiOpenSpecialPurposeMemory @ 0x14096E7E4 (MiOpenSpecialPurposeMemory.c)
 *     MmManagePartitionCharges @ 0x140982240 (MmManagePartitionCharges.c)
 *     MmManagePartitionCombineMemory @ 0x140982438 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1409824A4 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionInitialAddMemory @ 0x14098259C (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140982688 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionNodeInformation @ 0x1409828AC (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionUpdateAttributes @ 0x140982AF8 (MmManagePartitionUpdateAttributes.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, unsigned int Size)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  char PreviousMode; // si
  __int64 v10; // r13
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // r12d
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  int LargePages; // eax
  int v20; // ebx
  _QWORD *v21; // rcx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // r9
  int v28; // ebx
  char v29; // [rsp+30h] [rbp-168h]
  char v30; // [rsp+31h] [rbp-167h]
  _QWORD *v31; // [rsp+38h] [rbp-160h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-150h] BYREF
  __int64 v33; // [rsp+50h] [rbp-148h]
  _DWORD Src[60]; // [rsp+60h] [rbp-138h] BYREF

  v6 = a3;
  v33 = a2;
  memset(Src, 0, sizeof(Src));
  v30 = 0;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = 0LL;
  v31 = 0LL;
  if ( (unsigned int)v6 >= 0xD )
  {
    v14 = -1073741821;
    goto LABEL_28;
  }
  v10 = (unsigned int)v6;
  v11 = HIBYTE(PspPartitionInfoDetails[v6]);
  if ( (v11 & 0x10) == 0 && Size != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v14 = -1073741820;
    goto LABEL_28;
  }
  if ( (v11 & 1) != 0 )
  {
    if ( PreviousMode && Size )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = a4 + Size;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Src, (const void *)a4, Size);
  }
  v13 = PspPartitionInfoDetails[v6];
  if ( (_DWORD)v6 == 11 && Src[0] == 2 )
    v13 = 2;
  LOBYTE(v8) = PreviousMode;
  v14 = PsReferencePartitionByHandle(a1, v13, v8, 1884123984LL, &v31);
  if ( v14 >= 0 )
  {
    v29 = 1;
    if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
    {
      LOBYTE(v15) = PreviousMode;
      v14 = PsReferencePartitionByHandle(v33, v13, v15, 1884123984LL, &v32);
      if ( v14 < 0 )
        goto LABEL_28;
      v30 = 1;
      if ( v32 == v31 && ((_DWORD)v6 != 1 || (Src[3] & 0x400) == 0) )
      {
        v14 = -1073741811;
        goto LABEL_28;
      }
    }
    else if ( v33 )
    {
      v14 = -1073741584;
      goto LABEL_28;
    }
    v14 = MmCheckPartitionManagementSupported(v31, (unsigned int)v6);
    if ( v14 >= 0 )
    {
      if ( !v32 || (v14 = MmCheckPartitionManagementSupported(v32, (unsigned int)v6), v14 >= 0) )
      {
        if ( (int)v6 > 6 )
        {
          v20 = v6 - 7;
          v21 = v31;
          if ( !v20 )
          {
            LOBYTE(v16) = PreviousMode;
            LargePages = MmManagePartitionNodeInformation(v31, Src, v16);
            goto LABEL_23;
          }
          v22 = v20 - 1;
          if ( !v22 )
          {
            LOBYTE(v16) = PreviousMode;
            LargePages = MmManagePartitionCreateLargePages(v31, Src, v16);
            goto LABEL_23;
          }
          v23 = v22 - 1;
          if ( !v23 )
          {
            LOBYTE(v17) = PreviousMode;
            LargePages = MiQuerySpecialPurposeMemoryInformation(*v31, a4, Size, v17);
            goto LABEL_23;
          }
          v28 = v23 - 1;
          if ( !v28 )
          {
            LOBYTE(v16) = PreviousMode;
            LargePages = MiOpenSpecialPurposeMemory(*v31, Src, v16);
            goto LABEL_23;
          }
          if ( v28 == 1 )
          {
            LOBYTE(v17) = PreviousMode;
            LargePages = MmManagePartitionCharges(v31, Src, a4, v17);
            goto LABEL_23;
          }
          v27 = 0LL;
        }
        else
        {
          if ( (_DWORD)v6 != 6 )
          {
            if ( (_DWORD)v6 )
            {
              v24 = v6 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 == 1 )
                    {
                      LOBYTE(v17) = PreviousMode;
                      LargePages = MmManagePartitionInitialAddMemory(v31, Src, a4, v17);
                    }
                    else
                    {
                      LOBYTE(v16) = PreviousMode;
                      LargePages = MmManagePartitionGetMemoryEvents(v31, Src, v16);
                    }
                  }
                  else
                  {
                    LOBYTE(v17) = PreviousMode;
                    LargePages = MmManagePartitionCombineMemory(v31, Src, a4, v17);
                  }
                }
                else
                {
                  LOBYTE(v17) = PreviousMode;
                  LargePages = MiCreatePagingFile(a4, a4 + 16, a4 + 24, v17, Src[8], *v31);
                }
              }
              else
              {
                LOBYTE(v17) = PreviousMode;
                LargePages = MmManagePartitionMoveMemory(v31, v32, Src, v17);
              }
            }
            else
            {
              LargePages = MmManagePartitionMemoryInformation(v31, Src);
            }
LABEL_23:
            v14 = LargePages;
            if ( LargePages >= 0 && (PspPartitionInfoDetails[v10] & 0x200000000000000LL) != 0 )
            {
              if ( PreviousMode )
                ProbeForWrite((volatile void *)a4, Size, BYTE6(PspPartitionInfoDetails[v10]));
              memmove((void *)a4, Src, Size);
            }
            goto LABEL_28;
          }
          v27 = 1LL;
          v21 = v31;
        }
        LOBYTE(v16) = PreviousMode;
        LargePages = MmManagePartitionUpdateAttributes(v21, Src, v16, v27);
        goto LABEL_23;
      }
    }
  }
LABEL_28:
  if ( v29 )
    PsDereferencePartition((__int64)v31);
  if ( v30 )
    PsDereferencePartition((__int64)v32);
  return (unsigned int)v14;
}
