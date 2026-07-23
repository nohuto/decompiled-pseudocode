/*
 * XREFs of LdrpSignalModuleMapped @ 0x18001088C
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 */

void __fastcall LdrpSignalModuleMapped(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(_QWORD **)(v1 + 48);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v1 + 48);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 100))-- == 1 )
        {
          v4[14] = 4;
          LdrpQueueWork(v5);
        }
      }
    }
    while ( v3 != v2 );
  }
}
