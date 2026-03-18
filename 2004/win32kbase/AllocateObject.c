/*
 * XREFs of AllocateObject @ 0x1C0081A20
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C003147C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAlloc @ 0x1C0081830 (HmgAlloc.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

_QWORD *__fastcall AllocateObject(size_t Size, __int64 a2, int a3)
{
  BOOL v4; // esi
  unsigned int v5; // edi
  void * near *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rbx
  unsigned int v10; // edx

  v4 = gulGdiHmgrTraceObjectType && (_DWORD)a2 == gulGdiHmgrTraceObjectType;
  v5 = Size + 160;
  if ( !v4 )
    v5 = Size;
  if ( *((_DWORD *)&laSize + (unsigned int)a2) < v5 )
  {
    v10 = ((_DWORD)a2 << 24) + 808478791;
    if ( a3 )
    {
      v8 = PALLOCMEM2(v5, v10, 1);
    }
    else
    {
      v8 = PALLOCMEM2(v5, v10, 0);
      if ( !v8 )
        goto LABEL_30;
      *(_OWORD *)v8 = 0LL;
      v8[2] = 0LL;
    }
    if ( v8 )
    {
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v8 + v5 - 160), 0LL);
      return v8;
    }
  }
  else
  {
    v6 = (&pHmgLookAsideList)[(unsigned int)a2];
    if ( qword_1C0252C50 )
      v7 = qword_1C0252C50(Size, a2, 1LL);
    else
      v7 = -1073741637;
    if ( v7 >= 0 && qword_1C0252C58 )
      v8 = (_QWORD *)qword_1C0252C58(v6);
    else
      v8 = 0LL;
    if ( v8 )
    {
      if ( a3 )
      {
        memset(v8, 0, v5);
      }
      else
      {
        *(_OWORD *)v8 = 0LL;
        v8[2] = 0LL;
      }
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v8 + v5 - 160), 0LL);
      *((_WORD *)v8 + 7) = 0x8000;
      return v8;
    }
  }
LABEL_30:
  EngSetLastError(8u);
  return 0LL;
}
