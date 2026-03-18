/*
 * XREFs of ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C01E4A70
 * Callers:
 *     ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0079A90 (-SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGeometryMarshaler::SetFloatProperty(
        DirectComposition::CGeometryMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx

  result = 0LL;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3221225485LL;
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 22) = a3;
    }
    else
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 21) = a3;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 20) = a3;
  }
  *a4 = 1;
  return result;
}
