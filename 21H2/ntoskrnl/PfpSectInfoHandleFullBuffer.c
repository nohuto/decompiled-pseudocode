/*
 * XREFs of PfpSectInfoHandleFullBuffer @ 0x140611E90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 */

__int64 __fastcall PfpSectInfoHandleFullBuffer(_DWORD *a1)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int v5; // edi

  v2 = a1[11];
  v3 = a1[8] - (_DWORD)a1;
  v4 = a1[10];
  v5 = a1[6] - (_DWORD)a1;
  memset(a1, 0, 0x40uLL);
  a1[4] = 852013;
  a1[8] = 3;
  a1[6] = v5 - 16;
  a1[5] = 1128485697;
  a1[7] = 1;
  a1[9] = HIDWORD(xmmword_140C4FF10);
  a1[10] = dword_140C4FF24;
  a1[12] = v4;
  a1[13] = v3;
  a1[11] = 32;
  a1[14] = v2;
  return PfTTraceListAdd(a1);
}
