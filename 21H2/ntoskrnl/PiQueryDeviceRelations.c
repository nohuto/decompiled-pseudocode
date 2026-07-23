/*
 * XREFs of PiQueryDeviceRelations @ 0x1408B41DC
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x1408B3BD0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PnpQueryDeviceRelations @ 0x1407470F8 (PnpQueryDeviceRelations.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, unsigned int *a3, _WORD *a4)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v12; // esi
  _QWORD *v13; // rax
  void *v14; // r15
  __int64 v15; // r14
  _QWORD *v16; // rax
  unsigned int v17; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // r8
  unsigned int v20; // ebp
  __int64 **i; // r14
  __int64 v22; // rdx
  int DeviceRelations; // eax
  unsigned int v24; // ebp
  __int64 v25; // r14
  unsigned __int16 *v26; // rsi
  int v27; // edx
  _WORD *v28; // r12
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  P[0] = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return 3221225485LL;
          v12 = 6;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  PpDevNodeLockTree(0);
  v13 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v14 = v13;
  if ( v13 && (v15 = *(_QWORD *)(v13[39] + 40LL), (unsigned int)(*(_DWORD *)(v15 + 300) - 787) > 1) )
  {
    if ( v12 )
    {
      DeviceRelations = PnpQueryDeviceRelations((__int64)v13, v12, 0LL, (__int64)P);
      v19 = P[0];
      v6 = DeviceRelations;
      if ( DeviceRelations < 0 )
        v19 = 0LL;
      P[0] = v19;
    }
    else
    {
      v16 = *(_QWORD **)(v15 + 8);
      v17 = 0;
      while ( v16 )
      {
        v16 = (_QWORD *)*v16;
        ++v17;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v17 + 16, 0x20207050u);
      P[0] = PoolWithTag;
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v17;
        v20 = 0;
        for ( i = *(__int64 ***)(v15 + 8); i && v20 < v17; i = (__int64 **)*i )
        {
          ObfReferenceObjectWithTag(i[4], 0x43706E50u);
          v22 = v20++;
          *((_QWORD *)P[0] + v22 + 1) = i[4];
        }
        v19 = P[0];
      }
      else
      {
        v6 = -1073741670;
      }
    }
    if ( v19 && *v19 )
    {
      v24 = 0;
      v7 = 2;
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v19[2 * v24 + 2] + 312LL) + 40LL);
        if ( v25 )
        {
          v26 = (unsigned __int16 *)(v25 + 40);
          if ( v25 != -40 )
          {
            v27 = *v26;
            if ( (unsigned __int16)v27 >= 2u )
            {
              if ( a4 )
              {
                if ( *a3 < (unsigned __int64)(v7 + v27) + 2 )
                {
                  v6 = -1073741789;
                  goto LABEL_46;
                }
                memmove(a4, *(const void **)(v25 + 48), *v26);
                v28 = &a4[(unsigned __int64)*v26 >> 1];
                *v28 = 0;
                a4 = v28 + 1;
                LOWORD(v27) = *(_WORD *)(v25 + 40);
                v19 = P[0];
              }
              v7 += (unsigned __int16)v27 + 2;
            }
          }
        }
        ObfDereferenceObjectWithTag(*(PVOID *)&v19[2 * v24 + 2], 0x43706E50u);
        v19 = P[0];
        ++v24;
      }
      while ( v24 < *(_DWORD *)P[0] );
      if ( a4 )
      {
        if ( *a3 >= v7 )
          *a4 = 0;
        else
          v6 = -1073741789;
      }
    }
  }
  else
  {
    v6 = -1073741810;
  }
LABEL_46:
  PpDevNodeUnlockTree(0);
  if ( v6 < 0 )
    v7 = 0;
  *a3 = v7;
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x43706E50u);
  return (unsigned int)v6;
}
