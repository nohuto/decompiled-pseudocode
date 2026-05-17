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

int __fastcall PsspDumpThread(int *a1, int a2, int a3, int a4, int a5, HANDLE ThreadHandle)
{
  int v7; // esi
  void *v8; // eax
  unsigned int v9; // ecx
  int result; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  int v15; // ecx
  void *v16; // [esp-10h] [ebp-3Ch]
  size_t v17; // [esp-8h] [ebp-34h]
  void *v18; // [esp-8h] [ebp-34h]
  unsigned int v20; // [esp+10h] [ebp-1Ch] BYREF
  size_t Size; // [esp+14h] [ebp-18h]
  void *v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int ThreadInformation; // [esp+24h] [ebp-8h] BYREF
  ULONG ReturnLength; // [esp+28h] [ebp-4h] BYREF

  v23 = a2;
  v7 = *a1;
  v8 = (void *)(*a1 + a5 + 104);
  Size = (a4 + 15) & 0xFFFFFFF0;
  v22 = v8;
  v9 = a1[2];
  v24 = Size + a5 + 104;
  result = RtlULongPtrAdd(v9, v24, (int *)&v20);
  if ( result >= 0 )
  {
    if ( v20 <= a1[1] )
    {
      memset((void *)v7, 0, 0x68u);
      result = NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)0, (PVOID)v7, 0x1Cu, &ReturnLength);
      if ( result >= 0 )
      {
        if ( (v23 & 0x400) != 0
          && NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)21, (PVOID)(v7 + 32), 0x10u, &ReturnLength) < 0 )
        {
          *(_WORD *)(v7 + 36) = -1;
        }
        result = NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)1, (PVOID)(v7 + 48), 0x20u, &ReturnLength);
        if ( result >= 0 )
        {
          result = NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)9, (PVOID)(v7 + 80), 4u, &ReturnLength);
          if ( result >= 0 )
          {
            result = NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)20, &ThreadInformation, 4u, &ReturnLength);
            if ( result >= 0 )
            {
              *(_WORD *)(v7 + 98) = (ThreadInformation != 0) | *(_WORD *)(v7 + 98) & 0xFFFE;
              result = NtQueryInformationThread(
                         ThreadHandle,
                         (THREADINFOCLASS)35,
                         &ThreadInformation,
                         4u,
                         &ReturnLength);
              if ( result >= 0 )
              {
                v11 = (v23 & 0x100) == 0;
                *(_WORD *)(v7 + 96) = ThreadInformation;
                if ( !v11 )
                {
                  v17 = Size;
                  v16 = v22;
                  *(_WORD *)(v7 + 98) = (2 * a4) | *(_WORD *)(v7 + 98) & 1;
                  memset(v16, 0, v17);
                  v18 = v22;
                  *(_DWORD *)v22 = a3;
                  if ( NtGetContextThread((int)ThreadHandle, (int)v18) < 0 )
                  {
                    v12 = v24;
                    *(_WORD *)(v7 + 98) &= 1u;
                    v24 = v12 - Size;
                  }
                }
                while ( 1 )
                {
                  v13 = MEMORY[0x7FFE0018];
                  v14 = MEMORY[0x7FFE0014];
                  if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                    break;
                  _mm_pause();
                }
                v15 = v24;
                *a1 += v24;
                a1[2] += v15;
                ++a1[3];
                result = 0;
                *(_DWORD *)(v7 + 88) = v14;
                *(_DWORD *)(v7 + 92) = v13;
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
