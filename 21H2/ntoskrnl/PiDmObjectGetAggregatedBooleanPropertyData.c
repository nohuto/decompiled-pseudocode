/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14062B220 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDmObjectGetAggregatedBooleanPropertyData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  int v9; // r14d
  _BYTE *v12; // r15
  int Object; // ebx
  int v15; // r9d
  char *v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v24; // rsi
  ULONG_PTR v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD **v30; // r13
  _QWORD *v31; // rsi
  char *v32; // rdx
  int ObjectProperty; // eax
  int v34; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v36; // [rsp+70h] [rbp-10h]
  char v37; // [rsp+C0h] [rbp+40h] BYREF
  int v38; // [rsp+D0h] [rbp+50h] BYREF
  int v39; // [rsp+D4h] [rbp+54h]

  v39 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v9 = 0;
  v38 = 0;
  v34 = 0;
  v12 = (_BYTE *)a7;
  v37 = 0;
  Object = -1073741802;
  if ( a7 )
  {
    v15 = a8;
    v12 = (_BYTE *)(-(__int64)(a8 != 0) & a7);
  }
  else
  {
    v15 = 0;
  }
  if ( a1 < 7 && !a4 )
  {
    v16 = byte_140003E58;
    v17 = 0;
    while ( 1 )
    {
      v18 = *((_QWORD *)v16 + 1);
      if ( *(_DWORD *)(v18 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v20 = *(_QWORD *)v18 - *(_QWORD *)a5;
        if ( *(_QWORD *)v18 == *(_QWORD *)a5 )
          v20 = *(_QWORD *)(v18 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v20 && a1 == *(_DWORD *)v16 )
          break;
      }
      ++v17;
      v16 += 56;
      if ( v17 >= 3 )
        return (unsigned int)Object;
    }
    v21 = &PiDmAggregatedBooleanDefs[7 * v17];
    if ( v21 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( v15 )
      {
        Object = PiDmGetObject((unsigned int)a1, a2, &BugCheckParameter2);
        if ( Object >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v24 = BugCheckParameter2;
          a7 = v21[6];
          v22 = a7;
          v36 = BugCheckParameter2;
          --CurrentThread->KernelApcDisable;
          v25 = BugCheckParameter2;
          ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
          v26 = *(_DWORD *)(v24 + v22);
          if ( v26 == 0x80000000 )
          {
            v30 = (_QWORD **)(v25 + PiDmListDefs[5 * *((int *)v21 + 10) + 1]);
            v31 = *v30;
            if ( *v30 != v30 )
            {
              do
              {
                v32 = (char *)v31 - PiDmListDefs[5 * *((int *)v21 + 10) + 3];
                ObjectProperty = PnpGetObjectProperty(
                                   PiPnpRtlCtx,
                                   *((_QWORD *)v32 + 2),
                                   *((_DWORD *)v32 + 7),
                                   0,
                                   0LL,
                                   v21[1],
                                   (__int64)&v38,
                                   (__int64)&v37,
                                   1,
                                   (__int64)&v34,
                                   0);
                Object = ObjectProperty;
                if ( ObjectProperty < 0 )
                {
                  if ( ObjectProperty != -1073741275 )
                    goto LABEL_19;
                }
                else if ( v38 == 17 && v37 == -1 )
                {
                  ++v9;
                }
                v31 = (_QWORD *)*v31;
              }
              while ( v31 != v30 );
              v22 = a7;
            }
            *(_DWORD *)(v36 + v22) = v9;
            v26 = v9;
          }
          *v12 = (v26 <= 0) - 1;
          Object = 0;
LABEL_19:
          ExReleasePushLockEx(v25, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
          PiDmObjectRelease((PVOID)BugCheckParameter2);
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)Object;
}
