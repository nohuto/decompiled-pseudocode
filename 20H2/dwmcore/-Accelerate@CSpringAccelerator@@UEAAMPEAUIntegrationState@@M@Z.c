/*
 * XREFs of ?Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1800DEDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CSpringAccelerator::Accelerate(CSpringAccelerator *this, struct IntegrationState *a2, float a3)
{
  float result; // xmm0_4

  LODWORD(result) = COERCE_UNSIGNED_INT(
                      (float)((float)(*((float *)a2 + 1) - *((float *)this + 11)) * *((float *)this + 7))
                    + (float)(*((float *)a2 + 2) * *((float *)this + 8))) ^ _xmm;
  return result;
}
