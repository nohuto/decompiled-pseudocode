/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x18026AD60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD68C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 i; // rdi
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  ReleaseInterface<CResource>((__int64 *)this + 14);
  if ( *((_QWORD *)this + 23) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 44); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 23);
      v4 = *(_QWORD *)(v3 + 8 * i);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *(_QWORD *)(v3 + 8 * i) = 0LL;
      }
    }
  }
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 24) = 0LL;
  }
  ReleaseInterface<CResource>((__int64 *)this + 26);
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 25) = 0LL;
  }
  ReleaseInterface<CResource>((__int64 *)this + 27);
  ReleaseInterface<CResource>((__int64 *)this + 28);
}
