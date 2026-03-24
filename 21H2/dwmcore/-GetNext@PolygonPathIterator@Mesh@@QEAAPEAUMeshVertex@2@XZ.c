/*
 * XREFs of ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800BE5A4
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800BE378 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshVertex *__fastcall Mesh::PolygonPathIterator::GetNext(Mesh::PolygonPathIterator *this)
{
  _QWORD *v1; // r9
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r11
  __int64 *i; // r8
  _QWORD *v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = 0LL;
  if ( v1 )
  {
    v4 = *v1;
    v5 = *((_QWORD *)this + 2);
    if ( *v1 == v5 )
    {
      if ( *(_BYTE *)this )
        v2 = v1[3];
      else
        v2 = v1[5];
    }
    else if ( *(_BYTE *)this )
    {
      v2 = v1[4];
    }
    else
    {
      v2 = v1[6];
    }
    if ( v4 != v5 )
    {
      v6 = (__int64 *)v1[8];
      if ( v6 )
      {
        i = (__int64 *)v1[8];
        if ( !v5 || (v11 = *v6, v9 = (_QWORD *)v1[8], *v6 == v5) )
        {
          v8 = v1;
          v9 = (_QWORD *)v1[8];
          if ( *(_BYTE *)this )
          {
            v15 = (_QWORD *)v1[10];
            if ( v15 )
            {
              v16 = (_QWORD *)v1[8];
              do
              {
                v17 = (_QWORD *)v15[8];
                v9 = v16;
                if ( !v17 )
                  break;
                v9 = (_QWORD *)v1[8];
                if ( *v6 != *v17 )
                  break;
                v8 = v15;
                v16 = (_QWORD *)v1[8];
                v15 = (_QWORD *)v15[10];
              }
              while ( v15 );
            }
          }
          else
          {
            v10 = (_QWORD *)v1[9];
            if ( v10 )
            {
              v13 = (_QWORD *)v1[8];
              do
              {
                v14 = (_QWORD *)v10[8];
                v9 = v13;
                if ( !v14 )
                  break;
                v9 = (_QWORD *)v1[8];
                if ( *v6 != *v14 )
                  break;
                v8 = v10;
                v13 = (_QWORD *)v1[8];
                v10 = (_QWORD *)v10[9];
              }
              while ( v10 );
            }
          }
          i = (__int64 *)v8[8];
          v11 = *i;
          if ( *i == v5 )
            goto LABEL_17;
        }
        if ( *(_BYTE *)this )
        {
          if ( v5 || !i[10] )
          {
            for ( i = *(__int64 **)(v11 + 24); i != v6; i = (__int64 *)i[10] )
            {
              if ( *(_QWORD *)i[8] != *v1 )
                break;
              if ( *v6 != *i )
                break;
            }
            goto LABEL_17;
          }
        }
        else if ( v5 || !i[9] )
        {
          for ( i = *(__int64 **)(v11 + 32); i != v6; i = (__int64 *)i[9] )
          {
            if ( *v9 != *i )
              break;
            if ( *(_QWORD *)i[8] != *v1 )
              break;
          }
          goto LABEL_17;
        }
        *((_QWORD *)this + 2) = v11;
LABEL_17:
        *((_QWORD *)this + 3) = i;
        return (struct Mesh::MeshVertex *)v2;
      }
      *((_QWORD *)this + 2) = v4;
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  return (struct Mesh::MeshVertex *)v2;
}
