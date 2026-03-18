/*
 * XREFs of ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00B6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0034FEC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

__int64 __fastcall IOCPDispatcher::RegisterInputDispatcherObjects(
        IOCPDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  int v6; // ecx
  unsigned int v8; // r14d
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v6 = *((_DWORD *)this + 642);
  if ( v6 + a3 >= 0x40 )
    return 3221225485LL;
  v8 = 0;
  if ( a3 )
  {
    v9 = (__int64 *)((char *)a4 + 8);
    do
    {
      v13 = v8 + *((_DWORD *)this + 642);
      v10 = 5LL * v13;
      *((_QWORD *)this + v10 + 3) = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, *v9, 1, v13);
      ++v8;
      *((_QWORD *)this + v10 + 2) = *(v9 - 1);
      v11 = *v9;
      v9 += 3;
      *((_QWORD *)this + v10 + 1) = v11;
      *((_QWORD *)this + v10 + 4) = *(v9 - 2);
      *((_QWORD *)this + v10 + 5) = a2;
    }
    while ( v8 < a3 );
    v6 = *((_DWORD *)this + 642);
  }
  *((_DWORD *)this + 642) = v6 + a3;
  return 0LL;
}
