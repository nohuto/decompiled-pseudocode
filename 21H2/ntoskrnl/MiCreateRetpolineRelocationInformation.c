/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x1406C22D8
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x1402A3C98 (RtlCreateRetpolineRelocationInformation.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14078D984 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  _QWORD *Pool; // rdi
  unsigned int v11; // ebx
  char *v12; // rax
  int RetpolineRelocationInformation; // ebx
  int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-38h]

  v6 = a3 >> 12;
  v8 = 8 * (a3 >> 12);
  Pool = MiAllocatePool(256, v8 + 56, 0x7252694Du);
  if ( Pool )
  {
    v11 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
    v12 = (char *)MiAllocatePool(256, v11, 0x7252694Du);
    Pool[6] = v12;
    if ( v12 )
    {
      LODWORD(v16) = v11;
      RetpolineRelocationInformation = RtlCreateRetpolineRelocationInformation(
                                         a3,
                                         *(_DWORD *)(a1 + 4),
                                         *(_QWORD *)(a1 + 8),
                                         *(_QWORD *)(a1 + 16),
                                         *(_QWORD *)(a1 + 24),
                                         v12,
                                         v16,
                                         Pool + 7,
                                         v8);
      if ( RetpolineRelocationInformation >= 0 )
      {
        *((_DWORD *)Pool + 2) = *(_DWORD *)a1;
        v14 = dword_140C4CCF0 + 4095;
        *((_DWORD *)Pool + 1) = a2;
        *(_DWORD *)Pool = ((a3 + 4095) & 0xFFFFF000) + (v14 & 0xFFFFF000);
        *a4 = Pool;
        Pool = 0LL;
        RetpolineRelocationInformation = 0;
      }
    }
    else
    {
      RetpolineRelocationInformation = -1073741670;
    }
    if ( Pool )
      MiFreeRetpolineRelocationInformation(Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RetpolineRelocationInformation;
}
