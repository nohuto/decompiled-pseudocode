/*
 * XREFs of AllocateObject @ 0x1C007B100
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C001D000 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAlloc @ 0x1C007AF10 (HmgAlloc.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, __int64 a2, int a3)
{
  BOOL v4; // esi
  unsigned int v5; // edi
  void * near *v6; // rbx
  int v7; // eax
  __int64 v8; // rbx

  v4 = gulGdiHmgrTraceObjectType && (_DWORD)a2 == gulGdiHmgrTraceObjectType;
  v5 = Size + 160;
  if ( !v4 )
    v5 = Size;
  if ( *((_DWORD *)&laSize + (unsigned int)a2) < v5 )
  {
    if ( a3 )
    {
      v8 = PALLOCMEM2(v5);
    }
    else
    {
      v8 = PALLOCMEM2(v5);
      if ( !v8 )
        goto LABEL_30;
      *(_OWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    if ( v8 )
    {
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v5 - 160LL), 0LL);
      return v8;
    }
  }
  else
  {
    v6 = (&pHmgLookAsideList)[(unsigned int)a2];
    if ( qword_1C0258C10 )
      v7 = qword_1C0258C10(Size, a2, 1LL);
    else
      v7 = -1073741637;
    if ( v7 >= 0 && qword_1C0258C18 )
      v8 = qword_1C0258C18(v6);
    else
      v8 = 0LL;
    if ( v8 )
    {
      if ( a3 )
      {
        memset((void *)v8, 0, v5);
      }
      else
      {
        *(_OWORD *)v8 = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
      }
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v5 - 160LL), 0LL);
      *(_WORD *)(v8 + 14) = 0x8000;
      return v8;
    }
  }
LABEL_30:
  EngSetLastError(8u);
  return 0LL;
}
