/*
 * XREFs of NotifyObjectDestruction @ 0x1C0066970
 * Callers:
 *     ParseUnload @ 0x1C006C0C0 (ParseUnload.c)
 * Callees:
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     MarkNativeObjectsDefunct @ 0x1C0065908 (MarkNativeObjectsDefunct.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C00668B0 (MigrateDefunctObjectsToNewOwner.c)
 */

__int64 __fastcall NotifyObjectDestruction(__int64 a1)
{
  __int64 result; // rax
  KIRQL v3; // al
  __int64 v4; // rbx
  __int16 v5; // cx
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // r12
  __int64 *v10; // rbx
  __int16 v11; // ax
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 *i; // rdi
  char v17; // [rsp+58h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v17 = 0;
  result = NewObjOwner((struct _SLIST_ENTRY *)gpheapGlobal, &v18);
  if ( (int)result >= 0 )
  {
    v3 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      do
      {
        v5 = *(_WORD *)(v4 + 66);
        v6 = *(_QWORD *)(v4 + 56);
        if ( v5 == 6 || (unsigned __int16)(v5 - 11) <= 2u )
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v3);
          ((void (__fastcall *)(__int64, __int64, _QWORD))ghDestroyObj)(6LL, v4 + 120, *(unsigned __int16 *)(v4 + 66));
          v3 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        v4 = v6;
      }
      while ( v6 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v3);
    ((void (__fastcall *)(__int64, char *))ghDestroyObj)(1LL, &v17);
    v7 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v7;
    while ( v8 )
    {
      *(_WORD *)(v8 + 64) |= 4u;
      v8 = *(_QWORD *)(v8 + 56);
    }
    MarkNativeObjectsDefunct(0LL, a1);
    MigrateDefunctObjectsToNewOwner(gpNativeNameSpaceOwner, v18);
    MigrateDefunctObjectsToNewOwner((__int64)v18, (struct _EX_RUNDOWN_REF *)a1);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
    *(_DWORD *)(a1 + 48) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
    v10 = *(__int64 **)(a1 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *((_WORD *)v10 + 33);
        v12 = (__int64 *)v10[7];
        if ( v11 == 6 || (unsigned __int16)(v11 - 11) <= 2u )
        {
          if ( v10[2] )
          {
            v14 = (__int64 *)*v10;
            if ( *(__int64 **)(*v10 + 8) != v10 || (v15 = (__int64 **)v10[1], *v15 != v10) )
              __fastfail(3u);
            *v15 = v14;
            v14[1] = (__int64)v15;
            v10[2] = 0LL;
          }
          for ( i = (__int64 *)v10[3]; v10 + 3 != i; i = (__int64 *)*i )
          {
            if ( (i[8] & 4) == 0 )
              ((void (__fastcall *)(__int64, __int64 *))ghDestroyObj)(4LL, i);
          }
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v9);
          ((void (__fastcall *)(__int64, __int64 *, _QWORD))ghDestroyObj)(
            2LL,
            v10 + 15,
            *((unsigned __int16 *)v10 + 33));
          v9 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        else
        {
          v13 = v10[2];
          if ( !v13 || (*(_BYTE *)(v13 + 64) & 4) == 0 && !_bittest16((const signed __int16 *)v10 + 32, 0xBu) )
            ((void (__fastcall *)(__int64, __int64 *))ghDestroyObj)(5LL, v10);
        }
        v10 = v12;
      }
      while ( v12 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v9);
    return ((__int64 (__fastcall *)(__int64, char *))ghDestroyObj)(3LL, &v17);
  }
  return result;
}
