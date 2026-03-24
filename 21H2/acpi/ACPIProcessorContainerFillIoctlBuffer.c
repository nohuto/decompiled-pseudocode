/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x1C005D368
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005D368 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C005D55C (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C000BE70 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BF6C (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010920 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005D368 (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(__int64 ***a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 **v5; // rbx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // r10d
  __int64 *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // ebp
  __int64 v27; // rcx
  _DWORD *v28; // r11
  int v29; // ecx
  int v30; // eax
  int v31; // [rsp+30h] [rbp-48h] BYREF
  __int128 v32; // [rsp+38h] [rbp-40h] BYREF
  int v33; // [rsp+80h] [rbp+8h] BYREF

  v5 = *a1;
  v32 = 0LL;
  if ( v5 == (__int64 **)a1 )
    return 0LL;
  v10 = a5;
  while ( 1 )
  {
    v11 = *((unsigned int *)v5 + 14);
    v12 = 3 * v11;
    *(_DWORD *)(a3 + 24 * v11 + 8) = v11;
    if ( a2 != -1 )
      LODWORD(v11) = a2;
    *(_DWORD *)(a3 + 8 * v12 + 12) = v11;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, *(_DWORD *)(a3 + 8 * v12 + 8), a3, (_DWORD)a4, v10);
    if ( (int)result < 0 )
      break;
    v14 = *a4;
    *(_DWORD *)(a3 + 8 * v12 + 24) = 0;
    v15 = (v14 + 3) & 0xFFFFFFFC;
    v16 = v15;
    *(_DWORD *)(a3 + 8 * v12 + 28) = v15;
    v17 = v5[4];
    v18 = a3 + v15;
    v19 = 0;
    while ( v17 != (__int64 *)(v5 + 4) )
    {
      *(_DWORD *)(v18 + 4LL * *(unsigned int *)(a3 + 8 * v12 + 24)) = *((_DWORD *)v17 - 1);
      v19 = *(_DWORD *)(a3 + 8 * v12 + 24) + 1;
      *(_DWORD *)(a3 + 8 * v12 + 24) = v19;
      v17 = (__int64 *)*v17;
    }
    v20 = (__int64)v5[67];
    *a4 = v16 + 4 * v19;
    result = ACPIAmliBuildObjectPathnameUnicode(v20, (__int64)&v32);
    if ( (int)result < 0 )
      break;
    v21 = WORD1(v32);
    v22 = (const void *)*((_QWORD *)&v32 + 1);
    v23 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v23;
    *(_DWORD *)(a3 + 8 * v12 + 16) = v23;
    memmove((void *)(a3 + v23), v22, v21);
    ExFreePoolWithTag(*((PVOID *)&v32 + 1), 0);
    v24 = WORD1(v32) + *a4;
    v25 = v5[6] == 0LL;
    *a4 = v24;
    if ( v25 )
    {
      *(_DWORD *)(a3 + 8 * v12 + 20) = 0;
    }
    else
    {
      v33 = 0;
      v31 = 0;
      v26 = (v24 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v12 + 20) = v26;
      v27 = (__int64)v5[6];
      *a4 = v26;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v27, &v33, &v31, 0, 1);
      if ( (int)result < 0 )
        return result;
      v29 = v33 + 12;
      v30 = v33 + 12;
      if ( (unsigned int)(v33 + 12) < 0x14 )
      {
        v29 = 20;
        v30 = 20;
      }
      *v28 = 1114596673;
      *a4 = v26 + v30;
      v28[2] = v31;
      v28[1] = v29;
      result = ACPIIoctlCalculateOutputBufferV1((__int64)v5[6], (__int64)(v28 + 3), 0);
      if ( (int)result < 0 )
        return result;
    }
    v5 = (__int64 **)*v5;
    if ( v5 == (__int64 **)a1 )
      return 0LL;
  }
  return result;
}
