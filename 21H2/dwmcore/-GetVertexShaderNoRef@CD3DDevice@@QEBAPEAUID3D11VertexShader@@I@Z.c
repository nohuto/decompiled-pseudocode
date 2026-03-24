/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x180051744
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180052470 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180268D10 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDevice::GetVertexShaderNoRef(
        CD3DDevice *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // r8
  int v5; // eax
  __int64 v6; // rbx

  v4 = (_DWORD *)*((int *)this + 364);
  v5 = 0;
  if ( (int)v4 <= 0 )
  {
LABEL_5:
    v5 = -1;
  }
  else
  {
    a4 = 0LL;
    v4 = (_DWORD *)*((_QWORD *)this + 180);
    while ( *v4 != (_DWORD)a2 )
    {
      ++v5;
      ++a4;
      ++v4;
      if ( a4 >= *((int *)this + 364) )
        goto LABEL_5;
    }
  }
  if ( v5 == -1 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 181) + 8LL * v5);
    if ( !v6 )
      return (struct ID3D11VertexShader *)v6;
    (*(void (__fastcall **)(_QWORD, __int64, _DWORD *, __int64))(*(_QWORD *)v6 + 8LL))(
      *(_QWORD *)(*((_QWORD *)this + 181) + 8LL * v5),
      a2,
      v4,
      a4);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (struct ID3D11VertexShader *)v6;
}
