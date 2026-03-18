/*
 * XREFs of PowerRes @ 0x1C002B420
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall PowerRes(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  _SLIST_ENTRY *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  char v10; // cl
  __int64 v11; // rdx

  v2 = (__int64 *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (__int64 *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 11;
    *(_DWORD *)(*v2 + 88) = 2;
    *(_WORD *)(*v2 + 64) |= 0x40u;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1397903432, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = 0LL;
      v8 = 0LL;
      v9 = *(_QWORD *)(*v2 + 96);
      do
      {
        v10 = *(_BYTE *)(*(_QWORD *)(a2 + 80) + v8 + 56);
        v8 += 40LL;
        *(_BYTE *)(v7 + v9) = v10;
        ++v7;
      }
      while ( v8 < 80 );
      v11 = *v2;
      if ( ghCreate )
      {
        ghCreate(11LL, v11 + 120);
        v11 = *v2;
      }
      return (unsigned int)PushScope(
                             a1,
                             *(_QWORD *)(a1 + 120),
                             *(_SLIST_ENTRY **)(a2 + 40),
                             0LL,
                             v11,
                             *(_QWORD *)(a1 + 88),
                             *(_QWORD *)(a1 + 320),
                             *(_QWORD *)(a2 + 88));
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(146, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
