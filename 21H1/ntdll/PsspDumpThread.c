/*
 * XREFs of PsspDumpThread @ 0x4B38883C
 * Callers:
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _NtGetContextThread@8 @ 0x4B2F38A0 (_NtGetContextThread@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __userpurge PsspDumpThread@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        int a3@<ebx>,
        unsigned int a4,
        int a5,
        int a6,
        HANDLE ThreadHandle)
{
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ecx
  int result; // eax
  bool v12; // zf
  int v13; // ecx
  int v14; // edx
  int v15; // ebx
  int v16; // ecx
  _CONTEXT *v17; // [esp-10h] [ebp-3Ch]
  size_t v18; // [esp-8h] [ebp-34h]
  size_t v19; // [esp-8h] [ebp-34h]
  _CONTEXT *v20; // [esp-8h] [ebp-34h]
  unsigned int v22; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int Size; // [esp+14h] [ebp-18h]
  _CONTEXT *Size_4; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  int ThreadInformation; // [esp+24h] [ebp-8h] BYREF
  ULONG ReturnLength; // [esp+28h] [ebp-4h] BYREF

  v25 = a1;
  v8 = *a2;
  v9 = *a2 + a6 + 104;
  Size = (a5 + 15) & 0xFFFFFFF0;
  Size_4 = (_CONTEXT *)v9;
  v10 = a2[2];
  v26 = Size + a6 + 104;
  result = RtlULongPtrAdd(v10, v26, (int *)&v22);
  if ( result >= 0 )
  {
    if ( v22 <= a2[1] )
    {
      HIDWORD(v18) = a3;
      LODWORD(v18) = 104;
      memset((void *)v8, 0, v18);
      result = NtQueryInformationThread(ThreadHandle, ThreadBasicInformation, (PVOID)v8, 0x1Cu, &ReturnLength);
      if ( result >= 0 )
      {
        if ( (v25 & 0x400) != 0
          && NtQueryInformationThread(ThreadHandle, ThreadLastSystemCall, (PVOID)(v8 + 32), 0x10u, &ReturnLength) < 0 )
        {
          *(_WORD *)(v8 + 36) = -1;
        }
        result = NtQueryInformationThread(ThreadHandle, ThreadTimes, (PVOID)(v8 + 48), 0x20u, &ReturnLength);
        if ( result >= 0 )
        {
          result = NtQueryInformationThread(
                     ThreadHandle,
                     ThreadQuerySetWin32StartAddress,
                     (PVOID)(v8 + 80),
                     4u,
                     &ReturnLength);
          if ( result >= 0 )
          {
            result = NtQueryInformationThread(ThreadHandle, ThreadIsTerminated, &ThreadInformation, 4u, &ReturnLength);
            if ( result >= 0 )
            {
              *(_WORD *)(v8 + 98) = (ThreadInformation != 0) | *(_WORD *)(v8 + 98) & 0xFFFE;
              result = NtQueryInformationThread(ThreadHandle, ThreadSuspendCount, &ThreadInformation, 4u, &ReturnLength);
              if ( result >= 0 )
              {
                v12 = (v25 & 0x100) == 0;
                *(_WORD *)(v8 + 96) = ThreadInformation;
                if ( !v12 )
                {
                  v17 = Size_4;
                  LODWORD(v19) = Size;
                  *(_WORD *)(v8 + 98) = (2 * a5) | *(_WORD *)(v8 + 98) & 1;
                  memset(v17, 0, v19);
                  v20 = Size_4;
                  Size_4->ContextFlags = a4;
                  if ( NtGetContextThread(ThreadHandle, v20) < 0 )
                  {
                    v13 = v26;
                    *(_WORD *)(v8 + 98) &= 1u;
                    v26 = v13 - Size;
                  }
                }
                while ( 1 )
                {
                  v14 = MEMORY[0x7FFE0018];
                  v15 = MEMORY[0x7FFE0014];
                  if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                    break;
                  _mm_pause();
                }
                v16 = v26;
                *a2 += v26;
                a2[2] += v16;
                ++a2[3];
                result = 0;
                *(_DWORD *)(v8 + 88) = v15;
                *(_DWORD *)(v8 + 92) = v14;
              }
            }
          }
        }
      }
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
