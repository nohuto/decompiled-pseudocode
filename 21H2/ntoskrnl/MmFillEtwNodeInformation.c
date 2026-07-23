/*
 * XREFs of MmFillEtwNodeInformation @ 0x140547E34
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x1405A8FC8 (EtwpLogMemNodeInfo.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmFillEtwNodeInformation(unsigned __int16 **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // esi
  unsigned __int16 *v5; // rbp
  unsigned int v7; // edi
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = a3;
  v5 = *a1;
  if ( a3 > (unsigned __int16)KeNumberNodes )
    v4 = (unsigned __int16)KeNumberNodes;
  v7 = 0;
  if ( v4 )
  {
    v8 = 0LL;
    v9 = (_QWORD *)(a2 + 20);
    do
    {
      memset((char *)v9 - 20, 0, 0x4CuLL);
      v10 = *((_QWORD *)v5 + 2);
      *((_DWORD *)v9 - 5) = ++v7;
      *(v9 - 2) = *(_QWORD *)(v8 + v10 + 4176);
      *v9 = *(_QWORD *)(v8 + v10 + 4128);
      v9 = (_QWORD *)((char *)v9 + 76);
      *(_QWORD *)((char *)v9 - 84) = *(_QWORD *)(v8 + v10 + 4136);
      *(_QWORD *)((char *)v9 - 60) = *(_QWORD *)(v8 + v10 + 2144);
      *(_QWORD *)((char *)v9 - 68) = *(_QWORD *)(v8 + v10 + 2152);
      *(_QWORD *)((char *)v9 - 44) = *(_QWORD *)(v8 + v10 + 1072);
      *(_QWORD *)((char *)v9 - 52) = *(_QWORD *)(v8 + v10 + 1080);
      v11 = *(_QWORD *)(v8 + v10);
      v8 += 4544LL;
      *(_QWORD *)((char *)v9 - 28) = v11;
      *(_QWORD *)((char *)v9 - 36) = *(_QWORD *)(v8 + v10 - 4536);
    }
    while ( v7 < v4 );
  }
  result = v7;
  *a4 = *v5;
  return result;
}
