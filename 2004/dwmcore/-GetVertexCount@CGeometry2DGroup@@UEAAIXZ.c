/*
 * XREFs of ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ @ 0x1801B6520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVertexCount(CGeometry2DGroup *this)
{
  unsigned int v1; // edi
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = 0;
  v3 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v3;
  if ( (v3 & 6) == 2 )
  {
    v4 = *((_DWORD *)this + 38);
    if ( (v4 & 8) != 0 )
    {
      v5 = 0;
      v6 = 0;
      if ( *((_DWORD *)this + 24) )
      {
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v6);
          if ( v7 )
            v5 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7);
          ++v6;
        }
        while ( v6 < *((_DWORD *)this + 24) );
        v4 = *((_DWORD *)this + 38);
        v3 = *((_DWORD *)this + 8);
      }
      *((_DWORD *)this + 29) = v5;
      *((_DWORD *)this + 38) = v4 & 0xFFFFFFF7;
    }
    else
    {
      v5 = *((_DWORD *)this + 29);
    }
    v1 = v5;
  }
  result = v1;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(2 * (v3 >> 1) - 2)) & 6;
  return result;
}
