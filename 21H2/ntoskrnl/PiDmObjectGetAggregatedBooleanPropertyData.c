/*
 * XREFs of PiDmObjectGetAggregatedBooleanPropertyData @ 0x14077AD94
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14077AA70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
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
  int v9; // r15d
  _BYTE *v12; // r12
  int Object; // ebx
  int v15; // r9d
  char *v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v20; // rcx
  __int64 *v21; // rsi
  __int64 v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v24; // r14
  char *v25; // rdi
  int v26; // eax
  char *v27; // r13
  _QWORD *v28; // r14
  char *v29; // rdx
  int ObjectProperty; // eax
  int v31; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR v33; // [rsp+70h] [rbp-10h]
  char v34; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+D0h] [rbp+50h] BYREF
  int v36; // [rsp+D4h] [rbp+54h]

  v36 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v9 = 0;
  v35 = 0;
  v31 = 0;
  v12 = (_BYTE *)a7;
  v34 = 0;
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
    v16 = byte_140002438;
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
          v33 = BugCheckParameter2;
          --CurrentThread->KernelApcDisable;
          v25 = (char *)BugCheckParameter2;
          ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
          v26 = *(_DWORD *)(v24 + v22);
          if ( v26 == 0x80000000 )
          {
            v27 = &v25[PiDmListDefs[5 * *((int *)v21 + 10) + 1]];
            v28 = *(_QWORD **)v27;
            if ( *(char **)v27 != v27 )
            {
              do
              {
                v29 = (char *)v28 - PiDmListDefs[5 * *((int *)v21 + 10) + 3];
                ObjectProperty = PnpGetObjectProperty(
                                   PiPnpRtlCtx,
                                   *((_QWORD *)v29 + 2),
                                   *((_DWORD *)v29 + 7),
                                   0,
                                   0LL,
                                   v21[1],
                                   (__int64)&v35,
                                   (__int64)&v34,
                                   1,
                                   (__int64)&v31,
                                   0);
                Object = ObjectProperty;
                if ( ObjectProperty < 0 )
                {
                  if ( ObjectProperty != -1073741275 )
                    goto LABEL_19;
                }
                else if ( v35 == 17 && v34 == -1 )
                {
                  ++v9;
                }
                v28 = (_QWORD *)*v28;
              }
              while ( v28 != (_QWORD *)v27 );
              v22 = a7;
            }
            *(_DWORD *)(v33 + v22) = v9;
            v26 = v9;
          }
          *v12 = (v26 <= 0) - 1;
          Object = 0;
LABEL_19:
          ExReleasePushLockEx((ULONG_PTR)v25, 0LL);
          KeLeaveCriticalRegion();
          PiDmObjectRelease(v25);
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
