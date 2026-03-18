/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C01F6820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C01F6754 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        bool *Object)
{
  bool *v5; // r12
  NTSTATUS v6; // ebp
  PVOID *v8; // rbx
  __int64 i; // r14
  __int64 v11; // rsi
  struct _OBJECT_TYPE *v12; // rax
  PVOID v13; // rcx

  v5 = Object;
  v6 = 0;
  v8 = a3;
  *Object = 0;
  if ( (_DWORD)a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
        break;
      v12 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0252A28)();
      v13 = v8[i];
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v13, 0xF0001u, v12, 1, (PVOID *)&Object, 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      v8[i] = Object;
    }
    if ( *((_QWORD *)this + 13) )
    {
      DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this, a2, (__int64)a3);
      *((_DWORD *)this + 4) |= 0x100u;
    }
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 11) = v8;
    v8 = 0LL;
    *((_QWORD *)this + 13) = a4;
    *v5 = 1;
LABEL_10:
    if ( v8 && (_DWORD)i )
    {
      do
      {
        ObfDereferenceObject(*v8++);
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
