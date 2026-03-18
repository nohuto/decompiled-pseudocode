/*
 * XREFs of AllocQueue @ 0x1C00742A0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C000F894 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     IsKeyStateCached @ 0x1C0074490 (IsKeyStateCached.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00744E0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C0074530 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0075F40 (Win32AllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall AllocQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rcx
  int i; // edi
  int v8; // r10d
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  __int128 v11; // xmm1
  __int64 v12; // rax
  char v13[24]; // [rsp+20h] [rbp-38h] BYREF
  char v14[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 )
  {
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v13, a2);
    v5 = *(_DWORD *)(v2 + 396);
  }
  else
  {
    result = Win32AllocateFromPagedLookasideList(QLookaside);
    v2 = result;
    if ( !result )
      return result;
    v5 = 0;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 16) = 0;
  }
  memset((void *)(v2 + 24), 0, 0x1D0uLL);
  *(_DWORD *)(v2 + 396) = v5;
  *(_DWORD *)(v2 + 44) = 2;
  *(_QWORD *)(v2 + 56) = v2;
  *(_DWORD *)(v2 + 416) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v2 + 228) = *(_OWORD *)(v12 + 228);
    *(_OWORD *)(v2 + 244) = *(_OWORD *)(v12 + 244);
    *(_OWORD *)(v2 + 260) = *(_OWORD *)(v12 + 260);
    v11 = *(_OWORD *)(v12 + 276);
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        LOBYTE(v6) = i;
        if ( (unsigned __int8)IsKeyStateCached(v6) )
        {
          v8 = i & 3;
          v9 = (unsigned __int64)(unsigned __int8)i >> 2;
          v10 = *((_BYTE *)&gafAsyncKeyState + v9);
          if ( ((unsigned __int8)(1 << (2 * v8)) & v10) != 0 )
          {
            *(_BYTE *)(v9 + v2 + 228) |= 1 << (2 * v8);
            v10 = *((_BYTE *)&gafAsyncKeyState + v9);
          }
          v6 = (unsigned int)(2 * v8 + 1);
          if ( ((unsigned __int8)(1 << (2 * v8 + 1)) & v10) != 0 )
            *(_BYTE *)(v9 + v2 + 228) |= 1 << (2 * v8 + 1);
        }
      }
      goto LABEL_9;
    }
    CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v15);
    *(_OWORD *)(v2 + 228) = gafAsyncKeyState;
    *(_OWORD *)(v2 + 244) = xmmword_1C02518B0;
    *(_OWORD *)(v2 + 260) = xmmword_1C02518C0;
    v11 = xmmword_1C02518D0;
  }
  *(_OWORD *)(v2 + 276) = v11;
LABEL_9:
  if ( (gdwGTERMFlags & 1) == 0 )
    --*(_DWORD *)(v2 + 384);
  if ( qword_1C0257FB8 )
    qword_1C0257FB8(v2, qword_1C024DF58);
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v14, v2);
  return v2;
}
