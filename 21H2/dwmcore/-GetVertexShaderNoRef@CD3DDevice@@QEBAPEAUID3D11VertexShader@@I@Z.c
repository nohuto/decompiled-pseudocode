/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801EBD94
 * Callers:
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802AAC10 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDevice::GetVertexShaderNoRef(CD3DDevice *this, __int64 a2)
{
  int v2; // r9d
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 382) <= 0 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    v4 = *((int *)this + 382);
    v5 = 0LL;
    v6 = (_DWORD *)*((_QWORD *)this + 189);
    while ( *v6 != (_DWORD)a2 )
    {
      ++v2;
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v7 = *(_QWORD *)(*((_QWORD *)this + 190) + 8LL * v2);
    v9 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, a2, v5);
      goto LABEL_7;
    }
  }
  v7 = 0LL;
LABEL_7:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
  return (struct ID3D11VertexShader *)v7;
}
